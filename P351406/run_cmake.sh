#!/bin/bash

# Erstellen Sie das Build-Verzeichnis, falls es nicht existiert
mkdir -p build

# Gehen Sie in das Build-Verzeichnis
cd build

# Führen Sie cmake und make aus
cmake ..
make

# Überprüfen Sie, ob der Build erfolgreich war
if [ $? -eq 0 ]; then
    # Führen Sie das Hauptprogramm aus
    echo "Running main program..."
    ./main

    # Führen Sie die Tests aus
    echo "Running tests..."
    ./test/runTests
else
    echo "Build failed. Fix the errors and try again."
fi
