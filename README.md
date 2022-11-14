# boost-dependency

For background, see https://github.com/build2/build2/issues/184#issuecomment-1094970030

```
$ git clone https://github.com/boris-kolpackov/boost-dependency.git
$ cd boost-dependency
$ bdep init -C @gcc cc

# Up-to-date check:
#
$ b building-edit/
$ time -p BDEP_SYNC=0 b building-edit/
real 0.23
user 0.54
sys 0.13

# Match from scratch.
#
$ bdep clean -r
$ time -p BDEP_SYNC=0 b --match-only building-edit/
real 5.54
user 58.48
sys 10.23

# Noop sync.
#
$ bdep sync
$ time -p b noop: building-edit/
real 0.10
user 0.04
sys 0.01

# Re-sync.
#
$ bdep sync
$ echo '# dummy' >>building-edit/manifest
$ time -p b noop: building-edit/
real 2.49
user 2.11
sys 1.85
```
