# Endianess

## What is endianess
Endianess defines the order that the bytes are stored on memory. It is very important since different machines, protocols and firmwares have different endianess.

There are two conventions:
- Little endian: the smallest or less relevant byte piece comes first. Used on x86, x86_64, modern ARMs, etc.
- Big endian: the biggest or more relevant byte piece comes first. Used on TCP/IP and some ARMs.

It is possible to switch between endian types using htonl() and ntohl() from C Standard Library.

## How it works
To switch the bytes order on memory, it was used the Shift operation (<< and >>) and the 0xFF mask.

The 0xFF mask isolates the last byte from the current value, and the Shift operation is used to move the bytes left and right to isolate the correct byte.

## Content learned
- Endianess conventions
- C byte operations
