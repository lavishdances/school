/*    JavaScript 7th Edition
      Chapter 2
      Chapter case

      Fan Trick Fine Art Photography
      Variables and functions
      Author: 
      Date:   

      Filename: js02.js
 */
window.addEventListener("load", setupForm);

function setupForm()
{
    document.getElementById("photoNum").value = 0;
    document.getElementById("photoHrs").value = 2;
    document.getElementById("makeBook").checked = false;
    document.getElementById("photoRights").checked = false;
    document.getElementById("photoDist").value = 0;

    getEstimate();

    document.getElementById("photoNum").onchange = getEstimate;
    document.getElementById("photoHrs").onchange = getEstimate;
    document.getElementById("makeBook").onchange = getEstimate;
    document.getElementById("photoRights").onchange = getEstimate;
    document.getElementById("photoDist").onchange = getEstimate;
}

function getEstimate()
{
    let totalCost = 0;
    let photographers = document.getElementById("photoNum").value;
    let hours = document.getElementById("photoHrs").value;
    let distance = document.getElementById("photoDist").value;
    let buyBook = document.getElementById("makeBook").checked;
    let buyRights = document.getElementById("photoRights").checked;
    //declare employee cost
    let EMP_COST = 100;
    // cost of travel
    let TRAVEL_COST = 2;
    let BOOK_COST =  20;
    let REPRO_COST = 100;

    // add the cost of the photographers for the hours covered

    totalCost += photographers * hours * EMP_COST;

    // add the total cost of distance per photographer per mile

    totalCost += photographers * distance * TRAVEL_COST;

    // add the total cost of the book

    totalCost += buyBook ? BOOK_COST : 0;

    // add the cost of the photo rights if purchansed

    totalCost += buyRights ? REPRO_COST : 0;

    // display total cost estimate

    document.getElementById("estimate").innerHTML = "$" + totalCost;


}