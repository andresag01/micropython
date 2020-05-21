#ifndef __STDIO_H__
#define __STDIO_H__

#ifndef SEEK_SET
#define	SEEK_SET	0	/* set file offset to offset */
#endif
#ifndef SEEK_CUR
#define	SEEK_CUR	1	/* set file offset to current plus offset */
#endif
#ifndef SEEK_END
#define	SEEK_END	2	/* set file offset to EOF plus offset */
#endif

int	putchar(int c);
void printString(const char *s);
void printHex(unsigned int v);

#endif /* __STDIO_H__ */
