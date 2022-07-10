#pragma once

#include <Windows.h>

#define IO_GET_CLIENTADDRESS CTL_CODE(FILE_DEVICE_UNKNOWN, 0x666, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_READ_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x667, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_WRITE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x668, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_REQUEST_PROCESSID CTL_CODE(FILE_DEVICE_UNKNOWN, 0x669, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

typedef struct _KERNEL_READ_REQUEST
{
	ULONG ProcessId;
	ULONG Address;
	PVOID pBuff;
	ULONG Size;

} KERNEL_READ_REQUEST, * PKERNEL_READ_REQUEST;

typedef struct _KERNEL_WRITE_REQUEST
{
	ULONG ProcessId;
	ULONG Address;
	PVOID pBuff;
	ULONG Size;

} KERNEL_WRITE_REQUEST, * PKERNEL_WRITE_REQUEST;

//https://guidedhacking.com/threads/how-to-write-memory-from-kernel-mmcopyvirtualmemory-tutorial.15883/