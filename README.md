# Lumberjack Woodcutting Problem

This repository contains a solution to the Lumberjack Woodcutting Problem, a programming challenge where Mirko, a lumberjack, needs to determine the maximum height setting for his woodcutting machine to obtain a required amount of wood from a row of trees.

## Problem Description

Mirko needs to chop down M metres of wood from a row of trees using his woodcutting machine. The machine operates by setting a height parameter H and cutting off all tree parts higher than H. The goal is to find the maximum integer height of the sawblade that still allows Mirko to cut off at least M metres of wood.

## Input

The input consists of:
- N: The number of trees (1 ≤ N ≤ 1,000,000)
- M: Mirko’s required wood amount (1 ≤ M ≤ 2,000,000,000)
- Heights of each tree (N space-separated positive integers less than 1,000,000,000)

## Output

The output is the required height setting for Mirko's sawblade.

## Solution

The solution provided in this repository efficiently solves the problem by implementing a binary search algorithm. The algorithm searches for the maximum height setting by iteratively narrowing down the search space based on the amount of wood obtained at each height setting.
