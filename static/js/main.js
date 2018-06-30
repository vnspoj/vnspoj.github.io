(() => {
  const { PerfectScrollbar } = window;

  // Awesome scrollbar body
  const ps = new PerfectScrollbar('#js-wrapper-body', {
    wheelSpeed: 1.8
  });

  $('#js-scroll-top').click(() => {
    $('#js-wrapper-body').animate({
      scrollTop: $('#js-top-element').offset().top
    }, 500);
  });

})();
