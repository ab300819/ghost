//
// Created by 孟伸 on 2020/10/4.
//

#pragma once

#include <cstddef>
#include <cstdint>

namespace ghost {
struct BlockHeader {
	BlockHeader* pNext;
};
struct PageHeader {
	PageHeader* pNext;
	BlockHeader* Blocks() {
		return reinterpret_cast<BlockHeader*>(this + 1);
	}
};
class Allocator {
public:
	static const uint8_t PATTERN_ALIGN = 0xFC;
	static const uint8_t PATTERN_ALLOC = 0xFD;
	static const uint8_t PATTERN_FREE = 0xFE;

	Allocator(size_t data_size, size_t page_size, size_t alignment);
	~Allocator();

	void Reset(size_t data_size, size_t page_size, size_t alignment);

	void* Allocate();
	void Free(void* p);
	void FreeAll();

private:
#if defined(_DEBUG)
	void FillFreePage(PPageHeader* pPage);
	void FillFreeBlock(BlBlockHeader* pBlock);
	void FillAllocatedBlock(BBlockHeader* pBlock);
#endif
	BlockHeader* NextBlock(BlockHeader* pBlock);
	PageHeader* m_pPageList;
	BlockHeader* m_pFreeList;

	size_t m_szDataSize;
	size_t m_szPageSize;
	size_t m_szAlignmentSize;
	size_t m_szBlockSize;
	uint32_t m_nBlocksPerPage;

	uint32_t m_nPages;
	uint32_t m_nBlocks;
	uint32_t m_nFreeBlocks;

	Allocator(const Allocator& clone);
	Allocator& operator=(const Allocator& rhs);
};
}  // namespace ghost
