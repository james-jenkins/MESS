% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{cumsumbinning}
\alias{cumsumbinning}
\title{Binning based on cumulative sum with reset above threshold}
\usage{
cumsumbinning(x, cutoff, maxgroupsize = NULL)
}
\arguments{
\item{x}{A matrix of regressor variables. Must have the same number of rows as the length of y.}

\item{cutoff}{The value of the threshold that the cumulative group sum must not cross.}

\item{maxgroupsize}{An integer that defines the maximum number of elements in each group. NULL (the default) corresponds to no group size.}
}
\value{
An integer vector giving the group indices
}
\description{
Fast binning of cumulative vector sum with new groups when the sum passes a threshold or the group size becomes too large
}
\details{
Missing values (NA, Inf, NaN) are completely disregarded and pairwise complete cases are used f
}
\examples{

set.seed(1)
x <- sample(10, 20, replace = TRUE)
cumsumbinning(x, 15)
cumsumbinning(x, 15, 3)

}
\author{
Claus Ekstrom <claus@rprimer.dk>
}
