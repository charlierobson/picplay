extern unsigned short fast_crc16(unsigned short sum, unsigned char *buffer, int len);

unsigned char ioBuffer[512];

main() 
{
	unsigned short crc = 0xffff;
	crc = fast_crc16(crc, ioBuffer, 512);
}
