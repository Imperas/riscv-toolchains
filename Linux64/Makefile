SRC = $(wildcard *.c)
ELF = $(SRC:.c=.elf)
DMP = $(SRC:.c=.objdump)

all: $(ELF) $(DMP)

AFLAGS=-Wa,-march=rv64gv
CFLAGS=-mabi=lp64 -march=rv64imac -g
LDFLAGS=-Wl,--start-group,-lg,-lgloss,--end-group -lm

%.elf: %.c
	riscv-none-embed-gcc -o $@ $< $(CFLAGS) $(LDFLAGS) $(AFLAGS)

%.objdump: %.elf
	riscv-none-embed-objdump -D $< > $@

clean:
	- rm $(ELF) $(DMP)
