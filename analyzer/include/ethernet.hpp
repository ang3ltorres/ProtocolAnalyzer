#ifndef ETHERNET_HPP
#define ETHERNET_HPP

#include <cstdint>

#include <mac.hpp>
#include <data.hpp>

struct Ethernet
{
	Ethernet(void);
	~Ethernet(void) = default;

	void print(bool hex = false);
	void randomize(void);
	
	uint8_t preamble[8];
	Mac dst;
	Mac src;
	uint8_t type[2];
	Data data;
	uint32_t fcs;

	// AUX
	uint16_t length;
};

#endif
