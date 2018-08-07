<?php

/**
 * Class byu_views_hero_plugin_style_byu_hero
 */

class byu_views_hero_plugin_style_byu_hero extends views_plugin_style {

  /**
   * @return array
   */

  function option_definition() {
    $options = parent::option_definition();
    $options['hero_classes'] = ['default' => ''];
    $options['title'] = ['default' => ''];
    $options['intro_text'] = ['default' => ''];
    $options['image'] = ['default' => ''];
    $options['video_url'] = ['default' => ''];
    $options['read_more_link'] = ['default' => ''];

    return $options;
  }

  /**
   * @param $form
   * @param $form_state
   * @return array
   */

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $options = byu_views_hero_get_options($this->options);

    $fields = array('' => t('<None>'));

    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $label;
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

    // Classes Field

    $form['hero_classes'] = [
      '#type' => 'textfield',
      '#title' => t('Classes'),
      '#default_value' => $this->options['hero_classes'],
      '#description' => 'Put the classes here that will define the banner\'s style. Separate classes with spaces. (See readme)',
      '#required' => TRUE,
    ];

    // Title Field

    $form['title'] = [
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => $fields,
      '#default_value' => $this->options['title'],
      '#description' => 'Select the field for the banner\'s title.',
      '#required' => TRUE,
    ];

    // Body field

    $form['intro_text'] = [
      '#type' => 'select',
      '#title' => t('Intro Text'),
      '#options' => $fields,
      '#default_value' => $this->options['intro_text'],
      '#description' => 'Select the field for the banner\'s intro text.',
      '#multiple' => TRUE,
    ];

    // Image field

    $form ['image'] = [
      '#type' => 'select',
      '#title' => t('Image'),
      '#options' => $fields,
      '#default_value' => $this->options['image'],
      '#description' => 'Select the field for the banner\'s image source.',
      '#required' => TRUE,
    ];

    // Video URL field

    $form['video_url'] = [
      '#type' => 'select',
      '#title' => t('Video URL'),
      '#options' => $fields,
      '#default_value' => $this->options['video_url'],
      '#description' => 'Select the field for the banner\'s video source. Should be a link field.',
    ];

    // Read More Link

    $form['read_more_link'] = [
      '#type' => 'select',
      '#title' => t('Read More Link'),
      '#options' => $fields,
      '#default_value' => $this->options['read_more_link'],
      '#description' => 'Select the field for the banner\'s reade more link.',
    ];

    return $form;
  }
}