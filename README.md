# 42 C Projects

A collection of projects from the [42 school](https://42.fr) cursus, spanning the **common core** C curriculum and a handful of smaller mini-games and coding exercises. The common-core work covers the foundations expected of every 42 student: building a libc from scratch, parsing and graphics, Unix processes, shells, concurrency, and even raw assembly. The mini-games gather exam-style algorithm puzzles and interpreters. Almost everything is written in C and built on a hand-rolled `libft`.

## Common Core

| Project | Summary |
| --- | --- |
| [Extended libft C library](common-core/libft) | My extended 42 libft, rebuilt from scratch plus a custom toolkit: buffer-tracking `ft_malloc`/`ft_free`/`ft_realloc`, `get_next_line`, and 2D-array helpers. |
| [Per-call file line reader](common-core/get_next_line) | Hands back one newline-terminated line per call from a file descriptor, with string helpers I wrote from scratch. The bonus juggles up to 256 fds at once via a static `save[256][BUFFER_SIZE+1]`. |
| [Custom printf with multiple outputs](common-core/ft_printf-bonus) | My own take on printf, shipped as `libftprintf.a`. I pushed past the assignment with three entry points: `ft_printf` to stdout, `ft_dprintf` to any fd, and `ft_sprintf` returning a heap string. |
| [Two-stack integer sorter](common-core/push_swap) | My take on the push_swap challenge: sorting integers across two stacks with a minimal restricted op set, using a cost-based greedy chunk sort that scores each element's cheapest rotation path. Ships with a bonus `checker` binary. |
| [MiniLibX collect-and-exit tile game](common-core/So_long) | A MiniLibX 2D tile game on grid maps from `.ber` files: grab every collectible, then head for the exit. I went past the subject with enemy monsters and a flood-fill validator that proves the level is solvable before launch. |
| [Wolfenstein-style raycasting engine](common-core/cub3D) | My Wolfenstein-style raycasting engine in MiniLibX: it parses a `.cub` scene file and renders a real-time textured 3D maze with DDA ray-grid traversal. I love how paranoid the map parser is. |
| [Arbitrary-length shell pipeline emulator](common-core/pipex) | My take on the shell pipeline: each command in `./pipex infile cmd1 cmd2 outfile` gets its own forked child wired with anonymous pipes, and I pushed past the mandatory two to chain any number of pipes. |
| [AST tree-walking Bash clone](common-core/minishell) | A from-scratch Bash clone I'm proud of: it lexes input, builds a weighted AST of pipes, `&&`, `\|\|`, and subshells, then tree-walks it, forking with pipe/dup2 while running built-ins in-process. |
| [Improved operator-precedence Bash shell](common-core/minishell_broken) | My improved, more-powerful minishell: it lexes input, builds an operator-precedence AST for `\|`, `&&`, `\|\|`, `;` and subshells, then forks/execs with full redirection, heredoc, expansion, and nine built-ins. |
| [Dining Philosophers concurrency simulation](common-core/philosophers) | My take on Dining Philosophers, built twice (threads + mutexes, then forked processes over POSIX semaphores), where the hard part is grabbing two forks without ever deadlocking before `time_to_die`. |
| [x86-64 libc assembly library](common-core/libasm) | My own libc routines hand-written in x86-64 NASM (`libasm.a`), down at the syscall/register level, including an `atoi_base` built from scratch with full base validation. |
| [Tracking malloc/free garbage collector](common-core/Garbage-Collector) | A drop-in `malloc`/`free` replacement backed by a garbage collector: every `ft_malloc` becomes a node in a linked list, so one `destroy_garbage()` tears it all down at once. |

## Mini-Games

| Project | Summary |
| --- | --- |
| [Biggest-square map solver](mini-games/bsq) | My "Biggest Square" solver finds the largest obstacle-free square in an ASCII map, using a precomputed summed-area table for O(1) candidate checks. |
| [Single-file Brainfuck interpreter](mini-games/brainfuck) | My exam-style Brainfuck interpreter in a single `brainfuck.c`: it runs all 7 ops over a 2048-byte tape and skips the jump table entirely, resolving loops by scanning for the matching bracket. |
| [Recursive bracket-balance checker](mini-games/brackets) | I check whether every argument's `()`, `[]`, `{}` are balanced and nested: no explicit stack, just a self-recursive function walking a shared index, with `write()` as my only allowed syscall. |
| [LeetCode 79 Word Search solver](mini-games/Leetcode) | My take on LeetCode 79 "Word Search": a backtracking DFS over a 2D grid, with a twist I'm proud of. It counts the word's first vs last char and launches from the rarer endpoint, searching forwards or backwards. |
