SRCDIR = src/
BUILDDIR = build/
OBJDIR = obj/
INCDIR = inc/

CXX = g++
CXXFLAGS = -g -std=c++20 -lsfml-graphics -lsfml-window -lsfml-system \
		   $(foreach D, $(INCDIR), -I$(D))

BINARY = $(BUILDDIR)exe

CPPFILES := $(wildcard $(SRCDIR)*.cpp)
HPPFILES := $(wildcard $(INCDIR)*.hpp)
OBJFILES := $(patsubst $(SRCDIR)%.cpp,$(OBJDIR)%.o,$(CPPFILES))

.PHONY: all clean

all: $(BINARY)

$(BINARY): $(OBJFILES) | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)%.o: $(SRCDIR)%.cpp $(HPPFILES) | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR) $(BUILDDIR):
	mkdir -p $@

run: all
	./$(BINARY)

clean:
	rm -rf $(BUILDDIR) $(OBJDIR)

