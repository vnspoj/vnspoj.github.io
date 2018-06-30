(() => {
  const { PerfectScrollbar } = window;

  const $scrollTop = $('#js-scroll-top');
  const $topElement = $('#js-top-element');
  const $wrapperBody = $('#js-wrapper-body');

  // Awesome scrollbar body
  const ps = new PerfectScrollbar('#js-wrapper-body', {
    wheelSpeed: 1.8
  });

  $wrapperBody.scroll(function () {
    const $this = $(this);
    if ($this.scrollTop() > 800) {
      $scrollTop.fadeIn();
    } else {
      $scrollTop.fadeOut();
    }
  });

  $scrollTop.click(() => {
    $wrapperBody.animate({
      scrollTop: $topElement.offset().top
    }, 500);
  });

})();
