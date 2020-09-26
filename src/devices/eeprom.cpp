#include "eeprom.h" 
#include "util.h"

#include <cstring>

// HACK: Dummy eeprom
// TODO: Actually use a real eeprom image file
const uint8_t default_eeprom[] = {
    0xe3, 0x1c, 0x5c, 0x23, 0x6a, 0x58, 0x68, 0x37,
    0xb7, 0x12, 0x26, 0x6c, 0x99, 0x11, 0x30, 0xd1,
    0xe2, 0x3e, 0x4d, 0x56, 0xf7, 0x73, 0x2b, 0x73,
    0x85, 0xfe, 0x7f, 0x0a, 0x08, 0xef, 0x15, 0x3c,
    0x77, 0xee, 0x6d, 0x4e, 0x93, 0x2f, 0x28, 0xee,
    0xf8, 0x61, 0xf7, 0x94, 0x17, 0x1f, 0xfc, 0x11,
    0x0b, 0x84, 0x44, 0xed, 0x31, 0x30, 0x35, 0x35,
    0x38, 0x31, 0x31, 0x31, 0x34, 0x30, 0x30, 0x33,
    0x00, 0x50, 0xf2, 0x4f, 0x65, 0x52, 0x00, 0x00,
    0x0a, 0x1e, 0x35, 0x33, 0x71, 0x85, 0x31, 0x4d,
    0x59, 0x12, 0x38, 0x48, 0x1c, 0x91, 0x53, 0x60,
    0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x75, 0x61, 0x57, 0xfb, 0x2c, 0x01, 0x00, 0x00,
    0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0a, 0x05, 0x00, 0x02, 0x04, 0x01, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void Eeprom::Init()
{
    memcpy(m_Data, default_eeprom, array_size(default_eeprom));
}

void Eeprom::Reset()
{
}

void Eeprom::QuickCommand(bool read)
{
    Log(LogLevel::Warning, "Eeprom::QuickCommand not implemented\n");
}

uint8_t Eeprom::ReceiveByte()
{
    Log(LogLevel::Warning, "Eeprom::ReceiveByte not implemented\n");
    return 0;
}

uint8_t Eeprom::ReadByte(uint8_t command)
{
    return *((uint8_t*)(m_Data + command));
    Log(LogLevel::Warning, "Eeprom::ReadByte not implemented\n");
    return 0;
}

uint16_t Eeprom::ReadWord(uint8_t command)
{
    Log(LogLevel::Warning, "Eeprom::ReadWord %X\n", command);
    return *((uint16_t*)(m_Data + command));
}

int Eeprom::ReadBlock(uint8_t command, uint8_t *data)
{
    Log(LogLevel::Warning, "Eeprom::ReadBlock not implemented\n");
    return 0;
}

void Eeprom::SendByte(uint8_t data)
{
    Log(LogLevel::Warning, "Eeprom::SendByte not implemented\n");
}

void Eeprom::WriteByte(uint8_t command, uint8_t value)
{
    Log(LogLevel::Warning, "Eeprom::WriteByte not implemented\n");
}

void Eeprom::WriteWord(uint8_t command, uint16_t value)
{
    Log(LogLevel::Warning, "Eeprom::WriteWord not implemented\n");
}

void Eeprom::WriteBlock(uint8_t command, uint8_t* data, int length)
{
    Log(LogLevel::Warning, "Eeprom::WriteBlock not implemented\n");
}