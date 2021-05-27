\name{recom-package}
\alias{recom-package}
\alias{recom.package}
\alias{remove-comments}
\docType{package}
\title{
recom REmoves all the COMments from Rscript file.
}
\description{
 goal of recom-package is to remove of all the comments of the Rscript file, to reduce file size for better performance of Rscript.
}
\details{
 This package contains only one function that is recom function that removes all the comments of the given Rscript file and output as new Rscript file as specified by user in second argument.
Since R language comments are always perfect Suffixs so we can remove it easily, one by one, by remove suffix string from first (#) other then hash between strings, that is ( "i love #code" ) or  ( "i love #code 2" ).
}
\author{
Pradeep Suthar, sutharp777@gmail.com.

Maintainer: Pradeep Suthar <sutharp777@gmail.com>
}
\keyword{ remove-comments }
\examples{
  \dontrun{
     ## Optional simple examples of the most important functions
     ## These can be in \dontrun{} and \donttest{} blocks.   
  }
}
