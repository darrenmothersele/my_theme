<?php

// Plugin definition
$plugin = array(
  'title' => t('My Box'),
  'description' => t('My box style'),
  'render region' => 'my_box_region_style',
  'render pane' => 'my_box_style',
);

// Function to generate panels pane HTML
function theme_my_box_style($vars) {
  return '<div class="my-box">' . render($vars['content']->content) . '</div>';
}

// Function to generate panels region HTML
function theme_my_box_region_style($vars) {
  return '<div class="my-box">' . implode($vars['panes']) . '</div>';
}
