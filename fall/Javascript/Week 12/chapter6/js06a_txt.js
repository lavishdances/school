"use strict";
/*    JavaScript 7th Edition
      Chapter 6
      Chapter case

      Order Form Code
      Author: 
      Date:   

      Filename: js06a.js
 */
      window.addEventListener("load", setupForm);

      function setupForm()
      {
            document.getElementById("model").value = 0;
            document.getElementById("qty").value = 0;
            document.getElementById("plan_0").checked = false;
            document.getElementById("plan_1").checked = false;
            document.getElementById("plan_2").checked = false;
            document.getElementById("plan_3").checked = false;


            getEstimate();
     
          
            document.getElementById("model").onchange = getEstimate;
            document.getElementById("qty").onchange = getEstimate;
            document.getElementById("plan_0").onchange = getEstimate;
            document.getElementById("plan_1").onchange = getEstimate;
            document.getElementById("plan_2").onchange = getEstimate;
            document.getElementById("plan_3").onchange = getEstimate;



 
      }
      function getEstimate()
{
    let totalCost = 0;
    let modelCost = 0;
    let totalPlanCost = 0;
    let subTotal = 0;
    let tax = 0;
    let plan1 = document.getElementById("plan_0").checked;
    let plan2 = document.getElementById("plan_1").checked;
    let plan3 = document.getElementById("plan_2").checked;
    let plan4 = document.getElementById("plan_3").checked;
    let model = document.getElementById("model").value;
    let qty = document.getElementById("qty").value;

    // add the cost of the Model
    modelCost = qty * model;

    // display total cost of the Model

    document.getElementById("modelCost").value = "$" + modelCost;
    // add protection plan
    let planCost1 = 0;
    let planCost2 = 11.95;
    let planCost3 = 15.95;
    let planCost4 = 19.95;

    totalPlanCost += plan1 ? planCost1 :0;
    totalPlanCost += plan2 ? planCost2 :0;
    totalPlanCost += plan3 ? planCost3 :0;
    totalPlanCost += plan4 ? planCost4 :0;


document.getElementById("planCost").value = "$" + totalPlanCost.toFixed(2);

subTotal += modelCost + totalPlanCost;

document.getElementById("subtotal").value = "$" + subTotal.toFixed(2);

tax += subTotal * .05;

document.getElementById("salesTax").value = "$" + tax.toFixed(2);
totalCost += subTotal + tax;
document.getElementById("totalCost").value = "$" + totalCost.toFixed(2);

}