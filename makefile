.PHONY: run
run: build
	@echo "Running..."
	./main

.PHONY: build
build:
	@echo "Building..."
	g++ -o main main.cpp
	@echo "Done."

.PHONY: clean
clean:
	@echo "Cleaning..."
	rm -f main
	@echo "Done."