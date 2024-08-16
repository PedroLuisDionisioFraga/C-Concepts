#include "heap_alloc.h"

static MemoryBlock_t *g_free_list = NULL;         ///< A pointer to the first block in the free list.
static uint8_t g_memory_block[MALLOC_BLOCK_SIZE]; ///< A memory block of size MALLOC_BLOCK_SIZE.
static uint32_t g_memory_allocated = 0;           ///< The amount of memory allocated.

void heap_init(void)
{
  g_free_list = (MemoryBlock_t *)g_memory_block;
  g_free_list->size = MALLOC_BLOCK_SIZE - sizeof(MemoryBlock_t);
  g_free_list->in_use = false;
  g_free_list->next = NULL;
  g_free_list->previous = NULL;
}

static void *best_alloc_mem(MemoryBlock_t *new_block, size_t size)
{
  if (size > g_memory_allocated)
    return NULL;

  MemoryBlock_t *b;
  for (b = g_free_list; b == NULL; b = b->next)
  {
    if (new_block->in_use || new_block->size >= size)
      continue;

    b = new_block;
  }

  return b;
}

void *heap_alloc(uint32_t size)
{
  if (size == 0)
    return NULL;

  if (g_memory_allocated + size >= MALLOC_BLOCK_SIZE)
    return NULL;

  g_memory_allocated += size;

  MemoryBlock_t *new_block = best_alloc_mem(g_free_list, size);
  if (new_block == NULL)
    return NULL;

  new_block->in_use = true;
  new_block->size = size;
}

void heap_free(MemoryBlock_t *ptr)
{
  if (ptr == NULL)
    return;

  MemoryBlock_t *b;
  for (b = g_free_list; b != NULL; b = b->next)
  {
    if (!(b == ptr))
      continue;

    b->in_use = false;
    g_memory_allocated -= b->size;
  }
}
