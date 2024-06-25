CC=gcc
CPP=c++
CFLAGS=-I emlearn/emlearn -O0
TESTFILE2VAL=testfile2val.txt
TESTFILE6VAL=testfile6val.txt
TESTFILE8VAL=testfile8val.txt

KERNELS2VAL=$(patsubst %.c,%-test,$(wildcard output/*-2val-*.c))
KERNELS6VAL=$(patsubst %.c,%-test,$(wildcard output/*-6val-*.c))
KERNELS8VAL=$(patsubst %.c,%-test,$(wildcard output/*-8val-*.c))
TESTS=$(wildcard Build/*-test)

mlkernels2: $(KERNELS2VAL)

mlkernels6: $(KERNELS6VAL)

mlkernels8: $(KERNELS8VAL)


output/RF%-2val-lib-test: output/RF%-2val-lib.c
	cat $< test-RF.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE2VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=2 -o $(subst output,Build,$@) -lm
	
output/GNB-2val-lib-test: output/GNB-2val-lib.c
	cat $< test-GNB.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE2VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=2 -o $(subst output,Build,$@) -lm
	
output/MLP%-2val-lib-test: output/MLP%-2val-lib.c
	cat $< test-MLP.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE2VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=2 -o $(subst output,Build,$@) -lm
	
output/SVM%-2val-lib-test: output/SVM%-2val-lib.c
	cat test-SVM.h $< test-SVM.c > $(subst output,Build,$<pp)
	$(CC) -x c++ $(subst output,Build,$<pp) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE2VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=2 -o $(subst output,Build,$@) -lm
	
output/DT%-2val-lib-test: output/DT%-2val-lib.c
	cat $< test-DT.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE2VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=2 -o $(subst output,Build,$@) -lm
	
	
output/RF%-6val-lib-test: output/RF%-6val-lib.c
	cat $< test-RF.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE6VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=6 -o $(subst output,Build,$@) -lm
	
output/GNB-6val-lib-test: output/GNB-6val-lib.c
	cat $< test-GNB.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE6VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=6 -o $(subst output,Build,$@) -lm
	
output/MLP%-6val-lib-test: output/MLP%-6val-lib.c
	cat $< test-MLP.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE6VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=6 -o $(subst output,Build,$@) -lm
	
output/SVM%-6val-lib-test: output/SVM%-6val-lib.c
	cat test-SVM.h $< test-SVM.c > $(subst output,Build,$<pp)
	$(CC) -x c++ $(subst output,Build,$<pp) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE6VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=6 -o $(subst output,Build,$@) -lm
	
output/DT%-6val-lib-test: output/DT%-6val-lib.c
	cat $< test-DT.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE6VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=6 -o $(subst output,Build,$@) -lm
	
	
output/RF%-8val-lib-test: output/RF%-8val-lib.c
	cat $< test-RF.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE8VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=8 -o $(subst output,Build,$@) -lm
	
output/GNB-8val-lib-test: output/GNB-8val-lib.c
	cat $< test-GNB.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE8VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=8 -o $(subst output,Build,$@) -lm
	
output/MLP%-8val-lib-test: output/MLP%-8val-lib.c
	cat $< test-MLP.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE8VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=8 -o $(subst output,Build,$@) -lm
	
output/SVM%-8val-lib-test: output/SVM%-8val-lib.c
	cat test-SVM.h $< test-SVM.c > $(subst output,Build,$<pp)
	$(CC) $(subst output,Build,$<pp) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE8VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=8 -o $(subst output,Build,$@) -lm
	
output/DT%-8val-lib-test: output/DT%-8val-lib.c
	cat $< test-DT.c > $(subst output,Build,$<)
	$(CC) $(subst output,Build,$<) -Dlib=\"$(subst output/,,$(subst -lib-test,,$@))\" -Dtestfile=\"$(TESTFILE8VAL)\" -Dtestsquarepow $(CFLAGS) -DWIDTH=8 -o $(subst output,Build,$@) -lm
	
	
strip: $(TESTS)
	for x in Build/*-test; do strip $$x; done
	
run-tests: $(TESTS)
	for x in Build/*-test; do ./$$x; done
	
profile-tests: $(TESTS)
	for x in Build/*-test; do sudo ./tstime/tstime ./$$x; done
	
clean:
	rm Build/*
