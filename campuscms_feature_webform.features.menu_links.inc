<?php
/**
 * @file
 * campuscms_feature_webform.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_webform_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:node/add/webform
  $menu_links['menu-toolbar-administrator:node/add/webform'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-content-editor:node/add/webform
  $menu_links['menu-toolbar-content-editor:node/add/webform'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add/webform
  $menu_links['menu-toolbar-site-manager:node/add/webform'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Webform');


  return $menu_links;
}
