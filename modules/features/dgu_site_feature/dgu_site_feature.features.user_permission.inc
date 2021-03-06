<?php
/**
 * @file
 * dgu_site_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dgu_site_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access in-place editing'.
  $permissions['access in-place editing'] = array(
    'name' => 'access in-place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'quickedit',
  );

  return $permissions;
}
