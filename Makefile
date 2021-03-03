BDIR = bin
ODIR = obj
SDIR = src
EXEC = main
CFLAGS = -Wall -MD
CC = gcc
CFILES = $(wildcard $(SDIR)/*.c)
OFILES = $(CFILES:$(SDIR)/%.c=$(ODIR)/%.o)
DFILES = $(OFILES:.o=.d)

all: $(EXEC)

$(EXEC): $(BDIR)/$(EXEC)
	ln -s $< $@

$(BDIR)/$(EXEC): $(OFILES) $(BDIR)
	$(CC) $(LDLIBS) -o $@ $(OFILES)

$(ODIR)/%.o: $(SDIR)/%.c $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BDIR):
	mkdir $@

$(ODIR):
	mkdir $@

.PHONY: clean mrproper

clean:
	$(RM) -r $(ODIR)

mrproper: clean
	$(RM) $(EXEC)
	$(RM) -r $(BDIR)

-include $(DFILES)
