typedef unsigned char uint8;
typedef unsigned int uint32;


typedef union{
    uint8 byte;
    struct{
        uint32 b00 : 1;
        uint32 b01 : 1;
        uint32 b02 : 1;
        uint32 b03 : 1;
        uint32 b04 : 1;
        uint32 b05 : 1;
        uint32 b06 : 1;
        uint32 b07 : 1;
    }bit;
}F1;

typedef union {
	int a;
	int b;
	int c;
}hey;

void testMe2(hey h) {
	return;
}

F1 testMe(F1 f1) {
    return f1;
}

int main(void) {
    F1 f1;
    testMe(f1);
    return 0;
}