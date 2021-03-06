
require(devtools)
require(testthat)
load_all()

options(error = recover)
options(error = NULL)

build()

build_vignettes()

document()

Rcpp::compileAttributes()

test()
test_package("rtdists")  # no long tests of n1 functions
test(filter = "bugs")
test(filter = "input")
test(filter = "lba")
test(filter = "rng")
test(filter = "diffusion")
test_file("tests/testthat/test-diffusion.R")
test_file("tests/testthat/test-diffusion-math.R")
test_file("tests/testthat/test-diffusion-bugs.R")
test_file("tests/testthat/test-lba_basics.R")
test_file("tests/testthat/test-lba-bugs.R")
test_file("tests/testthat/test-lba-math.R")
test_file("tests/testthat/test-lba_input.R")
test_file("tests/testthat/test-lba_race.R")
test_file("tests/testthat/test-lba_race_input.R")
test_file("tests/testthat/test-rrd.R")

#test_file("tests/testthat/test-lba_race_random_parameters.R")

## Analyze problematic data:

# 1. n1CDF with t0:
load("inst//extdata//n1CDF_diff_example.RData")
n1CDF(r_lba1$rt[ r_lba1$response==1 ], A = A, b = b, t0 = t0, mean_v = v1, sd_v = v2)
n1CDF(r_lba1$rt[ r_lba1$response==1 ] - t0, A = A, b = b, t0 = 0, mean_v = v1, sd_v = v2)


## reverse dependency checks
revdepcheck::revdep_check(num_workers = 2) ## run in a new terminal
revdepcheck::revdep_summary()
