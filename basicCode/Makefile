SRCS := $(wildcard *.cpp)
CC := g++
BINS := $(SRCS:%.cpp=%.o)

all: compile helloWorld
helloWorld:
	@echo "hello world"
compile: ${BINS} vectors.h 
	g++ main.o vectors.o vectors.h -o mainRun
clean:
	@rm -rf mainRun
	@rm -rf *.o

listCPPFiles:
	@echo ${SRCS}
	@echo ${BINS}

%: %.cpp
	${CC} -c $<

# main: main.cpp
# 	${CC} -c main.cpp

# vectors: vectors.cpp
# 	${CC} -c vectors.cpp