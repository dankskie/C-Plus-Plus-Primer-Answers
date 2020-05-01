//non-successive inputs make seperate entries instead of grouping together based on isbn.

//0-201-78345-X 3 20.00
//0-201-78345-X 3 20.00
//0-201-78344-X 3 20.00
//0-201-78345-X 3 20.00

//turns into

//0-201-78345-X 6 120 20
//0-201-78344-X 3 60 20
//0-201-78345-X 3 60 20

//instead of the perferable

//0-201-78345-X 9 180 20
//0-201-78344-X 3 60 20
