include ../flags.mk

WHICH				:= $(shell which which)
MKDIR				:= $(shell $(WHICH) mkdir)
DIRNAME				:= $(shell $(WHICH) dirname)

INCFLAGS=-I. -I$(LIBSTARKINC) -I$(ALGEBRAINC) -I$(FFTINC)
# LIBS=						\
# 	stark					\
# 	algebralib				\
# 	FFT

# LIBFLAGS=$(addprefix -l, $(LIBS))
# LNKFLAGS=-L"$(ALGEBRALNKDIR)" -L"$(FFTLIBLNKDIR)" -L"$(LIBSTARKLINKDIR)" -lgomp

SRCDIR  = .
SRCEXT  = cpp
OBJDIR  = $(BLDDIR)/obj

SRCS    := $(shell find $(SRCDIR) -name '*.$(SRCEXT)')
SRCDIRS := $(shell find . -name '*.$(SRCEXT)' -exec dirname {} \; | uniq)
OBJS    := $(patsubst %.$(SRCEXT),$(OBJDIR)/%.o,$(SRCS))

# TARGET=$(BLDDIR)/fs-rs
TARGET=$(BLDDIR)/libmips.a
# DST=$(EXEDIR)/fs-rs
all: $(TARGET)

$(TARGET): buildrepo $(OBJS)
#	@echo 'Building target: $@'
#	@echo 'Invoking: GCC Linker'
	# $(CC) -o "$@" $(OBJS) -Xpreprocessor -fopenmp $(LNKFLAGS) $(LIBFLAGS)
#	@echo 'Finished building target: $@'
	# cp $(TARGET) $(DST)
	ar -r  "$@" $(OBJS) $(LIBS)

$(OBJDIR)/%.o: %.$(SRCEXT)
#	@echo "$(CC) $(CFLAGS) $(CPPFLAGS) $(INCFLAGS) -c -o "$@" "$<""
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCFLAGS) -c -o "$@" "$<"

clean:
	$(RM) -f $(TARGET) $(OBJS) $(DEPS)
	# $(RM) -rf $(OBJDIR)
	# $(RM) $(DST)

buildrepo:
	$(call make-repo)

define make-repo
for dir in $(SRCDIRS); \
	do \
	mkdir -p $(OBJDIR)/$$dir; \
	done
endef
