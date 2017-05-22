CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
MT = ./test/main.c
DT = ./test/deposit_test.c
VT = ./test/Val_test.c
MTO = ./build/test/main_test.o
DTO = ./build/test/deposit_test.o
VTO = ./build/test/Val_test.o

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
		rm ./build/test/*.o
