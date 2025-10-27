CC=gcc
CFLAGS=-Wall --pedantic
BIN=./bin
SRC=./src
TESTDIR=./test
EXTRA=./extra

<<<<<<< HEAD
all: $(BIN)/exercise1 $(BIN)/exercise2 $(BIN)/exercise3 $(BIN)/exercise4 $(BIN)/exercise5

$(BIN)/exercise1: bin
	$(CC) $(CFLAGS) $(SRC)/exercise1.c -o $(BIN)/exercise1
	
$(BIN)/exercise2: bin
	$(CC) $(CFLAGS) $(SRC)/exercise2.c -o $(BIN)/exercise2

$(BIN)/exercise3: bin
	$(CC) $(CFLAGS) $(SRC)/exercise3.c -o $(BIN)/exercise3

$(BIN)/exercise4: bin
	$(CC) $(CFLAGS) $(SRC)/exercise4.c -o $(BIN)/exercise4

$(BIN)/exercise5: bin
	$(CC) $(CFLAGS) $(SRC)/exercise5.c -o $(BIN)/exercise5

test1: $(BIN)/exercise1
	$(TESTDIR)/test1.sh

test2: $(BIN)/exercise2
	$(TESTDIR)/test2.sh

test3: $(BIN)/exercise3
	$(TESTDIR)/test3.sh

test4: $(BIN)/exercise4
	$(TESTDIR)/test4.sh

test5: $(BIN)/exercise5
	$(TESTDIR)/test5.sh
=======
test1: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_join_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test1 && $(BIN)/test1

test2: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_join_and_sort_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test2 && $(BIN)/test2

test3: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_get_min_and_max_from_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test3 && $(BIN)/test3
>>>>>>> b8882fef0e6805602dea9a2e546701644465d17f

bin:
	mkdir $(BIN)

clean:
	rm -rf $(BIN)