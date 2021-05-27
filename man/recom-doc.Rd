\name{recom}
\alias{recom}
\alias{remove.comment}
\docType{package}
\title{
recom (REmoves COMments of Rscript)
}
\description{
recom function removes all the comments of the given Rscript file and output as new Rscript file, which help in optimize by reducing Rscript file size.
}
\usage{
recom(input_file, output_file, remove_space=TRUE)	
}
\arguments{
\item{input_file}{path of input Rscript file(must exist).}
\item{output_file}{output file path (overwritten if already exist).}
\item{remove_space}{Optional. boolean flag whether we want to remove free space of comments or not.}
}
\examples{
\dontrun{
recom()
}
}
