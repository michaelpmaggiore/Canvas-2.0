TARGET = Canvas 2.0
SRC_FILES = main.cpp student.cpp academic_class.cpp assignment_class.cpp

CXX = g++
CFLAGS = -Wall -g -std=c++11

# For OS X using an Intel chip, use the following line
#CXX_FLAGS = 
# For OS X using an M1 chip, use the following line
#CXX_FLAGS = -arch x86_64

INC_PATH = /usr/local/include/
LIB_PATH = /usr/local/lib/
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

# do not modify anything below this line

OBJECTS = $(SRC_FILES:.cpp=.o)

ifeq ($(shell echo "Windows"), "Windows")
	TARGET := $(TARGET).exe
	DEL = del
else
	DEL = rm
endif

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) ${CXX_FLAGS} -o $@ $^ -L${LIB_PATH} ${LIBS}

.cpp.o:
	$(CXX) ${CXX_FLAGS} $(CFLAGS) -o $@ -c $< -I${INC_PATH} 

clean:
	$(DEL) $(TARGET) $(OBJECTS)

# DEPENDENCIES

student.o: student.cpp student.h
academic_class.o: academic_class.cpp academic_class.h
assignment_class.o: assignment_class.cpp assignment_class.h
main.o: main.cpp
