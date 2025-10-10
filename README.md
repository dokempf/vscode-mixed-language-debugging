# Mixed Language Debugging in VSCode

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

This repository show cases debugging with VSCode. It slowly ramps up to at the end show how to debug Pybind11 applications across the language barrier. This is thrown together for a short team presentation and will be refined later into usable materials.

## Preparation

```
python -m pip install --config-settings=cmake.build-type="Debug" -e .
python -m pip install -r requirements-dev.txt
```

Install all recommended extensions in VSCode.

## Lesson 1: Basics

Debug `grading_script.py`. Bob complained about not having passed the course despite hitting the threshold of 60 points.

* Breakpoint
* Stepping through code
* Conditional breakpoints

## Lesson 2: Debugging via configuration

Run `pytest`. Same problem, but with a custom configuration

## Lesson 3: Across the language barrier

Debug `grading_cpp.py`.
