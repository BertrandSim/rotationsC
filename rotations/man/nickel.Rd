\name{nickel}
\alias{nickel}
\docType{data}
\title{
Nickel electron backscatter diffraction data set
}
\description{
 Collection of EBSD data for a piece of nickel.
}
\usage{data(nickel)}
\format{
  A data frame with 48,286 rows and the following 13 columns
  \describe{
    \item{\code{xpos}}{location x position}
    \item{\code{ypos}}{location y position}
    \item{\code{location}}{Location number for easy reference}
    \item{\code{rep}}{Replicate scan identifier}
    \item{\code{V1}}{First element of x-axis describing crystal orientation at corresponding location}
    \item{\code{V2}}{Second element of x-axis describing crystal orientation at corresponding location}
    \item{\code{V3}}{Third element of x-axis describing crystal orientation at corresponding location}
    \item{\code{V4}}{First element of y-axis describing crystal orientation at corresponding location}
    \item{\code{V5}}{Second element of y-axis describing crystal orientation at corresponding location}
    \item{\code{V6}}{Third element of y-axis describing crystal orientation at corresponding location}
    \item{\code{V7}}{First element of z-axis describing crystal orientation at corresponding location}
    \item{\code{V8}}{Second element of z-axis describing crystal orientation at corresponding location}
    \item{\code{V9}}{Third element of z-axis describing crystal orientation at corresponding location}
  }
}
\details{
This data set consists of electron backscatter diffraction (EBSD) data obtained by scanning a fixed  12.5 \eqn{\mu}m-by-10 \eqn{\mu}m nickel surface at individual locations spaced 0.2 \eqn{\mu}m apart. This scan was repeated 14 times for each of the 3,449 locations yielding a total of 48,286 observations. Every observation corresponds to the orientation, expressed as a rotation matrix, of a cubic crystal on the metal surface at a particular location.  Be aware that there are missing values and erroneous scans at some locations and scans.  See Bingham et al. (2009) and Bingham et al. (2010) for more details and analysis.
}
\source{
The data set was collected by The Ames Lab located in Ames, IA. 
}
\references{
Bingham, M. A., Nordman, D., & Vardeman, S. (2009). "Modeling and inference for measured crystal orientations and a tractable class of symmetric distributions for rotations in three dimensions." Journal of the American Statistical Association, 104(488), pp. 1385-1397.

Bingham, M. A., Lograsso, B. K., & Laabs, F. C. (2010). "A statistical analysis of the variation in measured crystal orientations obtained through electron backscatter diffraction." Ultramicroscopy, 110(10), pp. 1312-1319.

Stanfill, B., Genschel, U., & Heike, H. (2013). "Point estimation of the central orientation of random rotations". Technometrics, 55(4), pp. 524-535.
}
\examples{
data(nickel) #Load the dataset
Rep1 <- subset(nickel, rep == 1) #Subset the data to include only the first scan

#Get a rough idea of how the grain map looks by plotting the first 
#element of the rotation matrix at each location
qplot(xpos, ypos, data = Rep1, colour = V1, size = I(2))

#Focus in on a particular location, for example location 698
Rs <- subset(nickel, location == 698) 
 
Rs <- as.SO3(Rs[,5:13])     #Translate the Rs data.frame into an object of class 'SO3'
Rs <- Rs[is.SO3(Rs),]       #Some observations are not rotations, remove them
mean(Rs)                    #Estimate the central orientation with the average
median(Rs)                  #Resetimate central orientation robustly
\dontrun{
plot(Rs, col = c(1, 2, 3))  #Visualize the location, there appears to be two groups}
}
\keyword{datasets}
