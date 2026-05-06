# ToneMatrix

A C++ project implementing a ToneMatrix (tone sequencer) with StringInstrument support.

## Overview

ToneMatrix is a grid-based sequencer that allows you to activate cells in a matrix and play musical notes. The StringInstrument class handles note playback.

## Project Structure

- **ToneMatrix.h / ToneMatrix.cpp** - Core matrix sequencer class
- **StringInstrument.h / StringInstrument.cpp** - String instrument synthesizer
- **main.cpp** - Demo and testing
- **ToneMatrix.pro** - Qt project configuration

## Building

This project uses Qt. To build:

```bash
qmake ToneMatrix.pro
make
```

## Running

```bash
./ToneMatrix
```

## Features

- Create configurable matrix grids
- Activate/deactivate cells
- Play individual columns or rows
- Play entire matrix sequences
- Volume control for instruments

## Example Usage

```cpp
ToneMatrix matrix(4, 4);
matrix.activateCell(0, 0);
matrix.activateCell(1, 1);
matrix.playColumn(0);
```
