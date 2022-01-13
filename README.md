<img src="https://user-images.githubusercontent.com/49487927/120012365-08311e80-bffd-11eb-813e-4d5412d13c1a.png" height="110">

### [recom (REmoves COMments of Rscript)](https://cran.r-project.org/web/packages/recom/index.html)
[![](https://www.r-pkg.org/badges/version/recom?color=blue)](https://cran.r-project.org/package=recom)
[![](http://cranlogs.r-pkg.org/badges/grand-total/recom?color=green)](https://cran.r-project.org/package=recom)

<!-- [![](http://cranlogs.r-pkg.org/badges/last-month/recom?color=white)](https://cran.r-project.org/package=recom)
[![](http://cranlogs.r-pkg.org/badges/last-week/recom?color=green)](https://cran.r-project.org/package=recom)
 -->
recom is also published on CRAN Repository: https://cran.r-project.org/web/packages/recom/index.html

**recom** is a `C++` project with goal of reduce file size of R Script for better performance by **Re**moving **Com**ments of R script file.

###  Documentation
```
recom(input_file, output_file, remove_space=TRUE)	
```

- **input_file** path of input Rscript file(must exist).
- **output_file**  output file path (overwritten if already exist).
- **remove_space** *Optional*. boolean flag whether we want to remove free space of comments or not.

### how to use:
```
install.packages("recom")
libarary(recom)

recom("input.R","output.R")

```

### Credits

Copyright (c) 2021 Pradeep Suthar

You may redistribute or modify the software under the GNU Lesser General Public License as published by Free Software Foundation, either version 3 of the License, or (at your option) any later version. It is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY.  
