#pragma once
#include <functional>
namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)>HashFunc;

	// Basic addition hash
	unsigned int badHash(const char* data, unsigned int length);

	// Hash function by Brian Kernighan and Dennis Ritchie  (Backdoor Hash (jk))
	unsigned int BKDRHash(const char* data, unsigned int length);

	unsigned int colorHash(const char* data, unsigned int length);

	unsigned int leetHash(const char* data, unsigned int length);

	// A helper to access defaultHash function
	// static HashFunc defaultHash = badHash;
	static HashFunc defaultHash = leetHash;
}