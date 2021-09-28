PROJECT:=txt_game

CXX=g++

OUT_DIR?=bin
SRC_DIR:=$(shell pwd)
SRCS:=$(shell find $(SRC_DIRS) -name "*.cpp" -or -name "*.c" -or -name "*.s")
INCS:=$(shell find $(SRC_DIRS) -name "*.h")

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OUT_DIR)/%.o)
CXXFLAGS = -Wall -O3 -fstack-protector
LDLIBS = -lstdc++ -lm -lncurses -ltinfo

all: $(OUT_DIR)/$(PROJECT) 

$(OUT_DIR)/$(PROJECT): $(OBJS) $(INCS)
	mkdir -p $(OUT_DIR)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $@ $(LDFLAGS)

.PHONY: all clean

clean:
	rm -rf $(OBJFILES) $(OUT_DIR)
