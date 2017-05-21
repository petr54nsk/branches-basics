CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.cpp
DC = ./src/deposit.cpp
MT = ./test/main.cpp
DT = ./test/deposit_test.cpp
VT = ./test/validation_test.cpp
MTO = ./test/build/main_test.o
DTO = ./test/build/deposit_test.o
VTO = ./test/build/validation_test.o

all: DepositCalc Test

DepositCalc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o ./bin/deposit-calc
	
Test: $(MTO) $(DTO) $(VTO)
	$(CC) $(MTO) $(DTO) $(VTO) -o ./bin/deposit-calc_test
	
$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC)  -c $(MC) -o $(MO)
	
$(MTO): $(MT)
	$(CC) -c $(MT) -o $(MTO)

$(DTO): $(DT)
	 $(CC) -c $(DT) -o $(DTO)

$(VTO): $(VT)
	 $(CC) -c $(VT) -o $(VTO)

clean:
	rm ./build/*.o
	rm ./test/build/*.o
