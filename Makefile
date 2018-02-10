SRCDIR=src
BUILDDIR=build
BINDIR=bin
TARGET=$(BINDIR)/cc

SRCEXT=cpp
SOURCES=$(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
SOURCES_FILTERED=$(filter-out $(SRCDIR)/printStats.cpp, $(SOURCES))
OBJECTS=$(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES_FILTERED:.$(SRCEXT)=.o))
CXX_FLAGS= -std=c++11 -g -O0 -Wall
INC= -I include

all: $(TARGET) $(BINDIR)/printStats

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	@echo "Linking..."
	$(CXX) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXX_FLAGS) $(INC) -c -o $@ $<

$(BINDIR)/printStats: $(BUILDDIR)/printStats.o
	$(CXX) $^ -o $(BINDIR)/printStats

$(BUILDDIR)/printStats.o: $(SRCDIR)/printStats.cpp
	$(CXX) $(CXX_FLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	$(RM) -rf $(BUILDDIR) $(BINDIR)

.PHONY: 
	clean
