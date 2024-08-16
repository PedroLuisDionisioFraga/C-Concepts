/**
 * @file heap_alloc.h
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Library to dinamically allocate variables in a static memory block
 * @version 0.1
 * @date 2024-06-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdbool.h>
#include <stdint.h>

#define MALLOC_BLOCK_SIZE 128 ///< The size of the memory block in bytes.

/**
 * @struct MemoryBlock
 * @brief This structure represents a block of memory.
 */
typedef struct MemoryBlock
{
  uint32_t size;
  struct MemoryBlock *next;
  struct MemoryBlock *previous;
  bool in_use;
  char data[];
} MemoryBlock_t;

/**
 * @brief This function initializes the memory.
 *
 * It sets g_free_list to point to g_memory_block and sets the size of the free list to MALLOC_BLOCK_SIZE - sizeof(struct MemoryBlock).
 */
void heap_init(void);

/**
 * @brief This function is used to allocate memory.
 *
 * It searches the free list for a block of the requested size, removes it from the free list, and returns a pointer to it.
 *
 * @param size The size of the memory to be allocated.
 * @return A pointer to the allocated memory, or NULL if no suitable block was found.
 */
void *heap_alloc(uint32_t size);

/**
 * @brief This function is used to free memory.
 *
 * It adds the block pointed to by ptr back to the free list.
 *
 * @param ptr A pointer to the memory to be freed.
 */
void heap_free(MemoryBlock_t *ptr);
