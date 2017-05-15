CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.cpp
DC = ./src/deposit.cpp

all: DepositCalc 

DepositCalc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o ./bin/deposit-calc

$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC)  -c $(MC) -o $(MO)

$(DTO): $(DT)
	 $(CC) -c $(DT) -o $(DTO)

$(VTO): $(VT)
	 $(CC) -c $(VT) -o $(VTO)

clean:
	rm ./build/*.o
