CPP = g++
CPPFLAGS := -std=c++11
SRCS := $(sort $(wildcard *.cpp))
EXECS := $(SRCS:%.cpp=%)

.PHONY: all clean

all: $(EXECS)

$(EXEC) : $(SRCS)
	$(CPP) $(CPPFLAGS) -o $@ $<

clean:
	rm -rf $(OBJS) $(EXECS) *.dSYM    
