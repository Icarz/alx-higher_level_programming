// Wait for the DOM to be fully loaded before executing the script
document.addEventListener('DOMContentLoaded', function () {
  // Select the <header> element using document.querySelector
  const headerElement = document.querySelector('header');

  // Update the text color of the <header> element to red (#FF0000)
  headerElement.style.color = '#FF0000';
});
