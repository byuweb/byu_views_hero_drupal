<byu-hero-banner class="byu-component-rendered <?php print $banner_style; ?>
<?php $banner_style == 'transparent-overlay' ? print ' ' . $overlay_align : print ''; ?>
<?php $banner_style == 'side-image' && $style_2 ? print ' image-style-2' : print ''; ?>
<?php $banner_style == 'full-screen' ? print ' ' . $image_brightness : print ''; ?>">
</byu-hero-banner>