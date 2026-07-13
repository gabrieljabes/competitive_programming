# Define o compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -std=c++20 -O2 -Wall -Wextra -Wshadow -DLOCAL

# Arquivo padrão
f ?= main.cpp

# Extrai os caminhos (AGORA SEM COMENTÁRIOS NA MESMA LINHA)
DIR := $(dir $(f))
FILE := $(notdir $(f))
BASENAME := $(basename $(FILE))

# Diretório build e alvo
BUILD_DIR := $(DIR)build
TARGET := $(BUILD_DIR)/$(BASENAME)

.PHONY: all compile run clean

all: run

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

compile: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(f) -o $(TARGET)

run: compile
	@echo "--- Executando $(TARGET) ---"
	@./$(TARGET)

clean:
	rm -rf */build