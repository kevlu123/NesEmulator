#pragma once
#include "Mapper.h"

class Mapper140 : public Mapper
{
public:
	Mapper140(int mapperNumber, int prgChunks, int chrChunks, std::vector<uint8_t>& prg, std::vector<uint8_t>& chr);
	Mapper140(Snapshot& bytes, std::vector<uint8_t>& prg, std::vector<uint8_t>& chr);
	bool MapCpuRead(uint16_t& addr, uint8_t& data, bool readonly = false) override;
	bool MapCpuWrite(uint16_t& addr, uint8_t data) override;
	bool MapPpuRead(uint16_t& addr, uint8_t& data, bool readonly = false) override;
	bool MapPpuWrite(uint16_t& addr, uint8_t data) override;
	Snapshot SaveState() const override;
	void Reset() override;
private:
	int prgBank;
	int chrBank;
};
