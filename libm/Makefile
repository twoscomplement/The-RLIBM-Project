all: rlibm.a

CC = gcc

rlibmfiles = log2f logf exp10f exp2f expf log10f coshf sinhf cospif sinpif sinf cosf tanf atanf asinf acosf

rlibmsrcdir = .
rlibmobjdir = obj

rlibmsrc = $(patsubst %, $(rlibmsrcdir)/%.c, $(rlibmfiles))
rlibmobj = $(patsubst %, $(rlibmobjdir)/%.o, $(rlibmfiles))

$(rlibmobjdir)/%.o: $(rlibmsrcdir)/%.c
	@mkdir -p $(rlibmobjdir)
	$(CC) -std=c11 -O3 -c $^  -o $@

rlibm.a: $(rlibmobj)
	ar rc $@ $^

clean:
	rm -rf  obj *~ rlibm.a
