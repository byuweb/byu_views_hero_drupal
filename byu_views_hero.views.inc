<?php
/**
 * Implements hook_views_plugins().
 */

function byu_views_hero_views_plugins() {
  return [
    'style' => [
      'byu_hero' => [
        'title' => t('BYU Hero Banner'),
        'help' => t('Display content in a BYU Hero Banner'),
        'handler' => 'byu_views_hero_plugin_style_byu_hero',
        'theme' => 'views_view_byu_hero',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses fields' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'parent' => 'list',
      ],
    ],
  ];
}