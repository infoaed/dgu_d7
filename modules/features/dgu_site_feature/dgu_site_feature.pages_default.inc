<?php
/**
 * @file
 * dgu_site_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dgu_site_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'About pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'what_s_data_gov_uk_all_about_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dgu_site_feature_default_page_manager_pages() {

  /*
   * The "About" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'Mis on avaandmete portaal?';
  $page->admin_description = 'Mis on avaandmete portaal?';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'menu-footer',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'about-us',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => t('<p><strong>What is the open data portal?</strong></p>
<p><a href="https://opendata.riik.ee/en" rel="nofollow">The open data portal</a> is intended to serve as a platform where to gather the records of the public<em>datasets</em> created by public bodies and local authorities and where new datasets can be made public. On one hand, it is a place where the owners of the dataset or <em>holders of information</em> can register or upload their datasets. On the other hand, it is a place where the stakeholders and regular citizens can search and download the published data and use it for further processing or information requests.</p>
<p><strong>Goals of opening up data:</strong></p>
<p>Opening up data, their collection and making available on a single platforms serve several important purposes:</p>
<ul><li>to stimulate economy;</li>
<li>to increase transparency;</li>
<li>to decrease the number of information requests and, consequently, also reduce the workload of public sector workers;</li>
<li>to facilitate creation and management of open services for private and community sectors</li>
<li>to encourage migration to future technologies such as <a href="https://en.wikipedia.org/wiki/Linked_data" rel="nofollow">Linked Data</a>, "<a href="http://en.wikipedia.org/wiki/Internet_of_Things" rel="nofollow">Internet of Things</a>" ja "<a href="http://en.wikipedia.org/wiki/Big_data" rel="nofollow">Big Data</a>".</li>
</ul><p><strong>What are open data?</strong></p>
<p>Open data is taken to mean raw data that is freely made available online for use by everybody in a machine readable format without any restrictions on use and distribution. In general, if no charge is stipulated in legislation for the retrieval of data, the open data can be retrieved free of charge and without any restrictions on access. More information (in Estonian) on the principles, technologies and processes of opening up data is available <a href="/sites/default/files/manuals/juhised-andmete-avalikustamiseks.odt" rel="nofollow">here</a>.</p>
<p><strong>What kind of data can be found here?</strong></p>
<p>All datasets which are created by government agencies and local authorities, whose public use is not directly forbidden and which contain other data than personal data are to be made public and registered on the open data portal. If the datasets contain both personal and non-personal data, only the non-personal parts of the data will be made public.</p>
<p>In particular, the data in the datasets to be published should in general be created, collected or administered by a government agency or local authority. A government agency or a local authority may, with the consent of a third party, also publish the data of that third party if it considers it to be of sufficient interest to the public.</p>
<p>Such datasets may be collections of agreements, regulations, correspondence metadata, budget files, statistics files, databases/registers converted into a publicly readable format or web services which retrieve information from such databases/registers. It is not reasonable to regard a single agreement, regulation, etc. as a separate dataset whereas a single database typically should be regarded as a separate dataset.</p>
<p>In technical sense, a published dataset may be either a collection of human-readable text files (such as a collection of statutes, regulations, agreements or official announcements) or a collection of machine-readable data (such as a database that is exported to CSV or XML files or a web service that allows searching and downloading all data in the dataset in, for example, json or xml format).</p>
<p><strong>How can open data be used?</strong></p>
<p>Published datasets can be used in many different ways and for different purposes, e.g., trend analyses in particular policy areas over certain periods of time, comparison of datasets of different government agencies and ministries in order to detect dependencies and derive potential new information, etc. Stakeholders who possess sufficient technical capabilities may, using published raw data, create useful and interesting applications and services for the public.</p>
<p><strong>Where can I find more information?</strong></p>
<p>Read the materials found on the pages accessible from the menu MORE INFO or, should you have a specific question, send it to one of the e-mail addresses listed on the <a href="/en/kontaktid" rel="nofollow">Contacts</a> page.</p>
'),
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'what_s_data_gov_uk_all_about_';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  /*
   * The "Home" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'avaleht';
  $page->task = 'page';
  $page->admin_title = 'Avaleht';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_avaleht_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'avaleht';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Avaleht',
      'title' => 'AVALEHT',
      'body' => '<p>Test avaleht</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['avaleht'] = $page;

  /*
   * The "Data" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data';
  $page->task = 'page';
  $page->admin_title = 'Data';
  $page->admin_description = 'Place holder for CKAN data page ';
  $page->path = 'data';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Data',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'data',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ckan_datasets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ckan_dataset_admin_page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ckan_publishers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ckan_publisher_admin_page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][1] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data'] = $page;

  /*
   * The "Frequently asked questions" page.
   */

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'Frequently asked questions';
  $page->admin_description = 'Frequently asked questions';
  $page->path = 'kkk';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'faq',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => t('Frequently asked questions'),
      'body' => t('<p><strong>1. What is the government open data portal?</strong></p>

<p>The open data portal is intended to serve as a platform for the dissemination of data by public bodies and for searching and retrieving such datasets by open data users.</p>

<p>On the open data portal, it is possible:</p>

<ul>
<li>to search and download open data;</li>
<li>to publish new open data: to gain access to this functionality, a prior registration with the portal\'s administrator is required;</li>
<li>to use it as a storage of datasets by government agencies and local authorities;</li>
<li>to search and use applications created on the basis of open data;</li>
<li>to post news, questions and instructions pertaining to open data and to have discussions on relevant topics.</li>
</ul>

<p><strong>2. Why open up data?</strong></p>


<p>Opening up data and their collection, storage and dissemination serves the following important goals:</p>

<ul>
<li>to stimulate economy by the re-use of data;</li>
<li>to increase the transparency of the public sector;</li>
<li>to decrease the number of information requests and, consequently, also reduce the workload of public sector workers;</li>
<li>to facilitate creation and management of open services for private and community sectors;</li>
<li>to encourage migration to future technologies such as <a href="https://en.wikipedia.org/wiki/Linked_data">Linked Data</a>, "<a href="http://en.wikipedia.org/wiki/Internet_of_Things">Internet of Things</a>" and "<a href="http://en.wikipedia.org/wiki/Big_data">Big Data</a>".</li>
</ul>

<p><strong>3. What to publish?</strong></p>

<p>The publication of data created by public sector bodies serves many purposes, most importantly allowing private individuals, companies and third sector bodies simply to examine the existing data or to use it in their software applications to create value added. .</p>

<p>All datasets which are created by government agencies and local authorities, whose public use is not directly forbidden and which contain other data than personal data are to be made public. If the datasets contain both personal and non-personal data, only the non-personal parts of the data will be made public.</p>

<p>In particular, the data in the datasets to be published should in general be created, collected or administered by a government agency or local authority. A government agency or a local authority may, with the consent of a third party, also publish the data of that third party if it considers it to be of sufficient interest to the public.</p>

<p><strong>4.Which principles need to be followed when publishing datasets?</strong></p>

<p>Two goals must be balanced while publishing datasets:</p>

<ul>
<li>the data presentation should be convenient and understandable for the users;</li>
<li>the data publisher should be able to publish data with ease and minimal effort.</li>
</ul>

<p>Public sector data shall be considered open if it is made public in a way that complies with the principles below: (retrieved from: <a href="https://opengovdata.org/" title="The Annotated 8 Principles of Open Government Data">https://opengovdata.org/</a> ):</p>

<p style="margin-left:40px">1. Complete<br />
All public data is made available. Public data is data that is not subject to valid privacy, security or privilege limitations.<br />2. Primary<br />Data is as collected at the source, with the highest possible level of granularity, not in aggregate or modified forms.<br />3. Timely<br />Data is made available as quickly as necessary to preserve the value of the data.<br />4. Accessible<br />Data is available to the widest range of users for the widest range of purposes.<br />5. Machine processable<br />Data is reasonably structured to allow automated processing.<br />6. Non-discriminatory<br />Data is available to anyone, with no requirement of registration.<br />7. Non-proprietary<br />Data is available in a format over which no entity has exclusive control.<br />8. Licence-free<br />Data is not subject to any copyright, patent, trademark or trade secret regulation. Reasonable privacy, security and privilege restrictions may be allowed.</p>

<p><strong>5. How can my organisation publish data on this portal?</strong></p>

<p>A Guidance for data publishers is found here…</p>

<p><strong>6. Will personal information be at risk?</strong></p>

<p>The published data will not identify or provide ways to identify individuals, unless that information is already published (such as the names of the civil servants working at the ministries).</p>

<p><strong>7. What are the licence requirements for the published data?</strong></p>

<p>The open data must published under a licence which permits its free and unlimited use, processing and distribution. Under the licence, it must be possible to distribute the data at the discretion of the user either without charge or for a fee.</p>

<p>We recommend that you pick a CreativeCommons licence, see <a href="http://creativecommons.org/" title="When we share, everyone wins &mdash; Creative Commons">https://creativecommons.org/</a>. From among the licences listed on the site, we recommend the CC by 3.0 licence: <a href="https://creativecommons.org/licenses/by/3.0/" title="Creative Commons &mdash; Attribution 3.0 Unported &mdash; CC BY 3.0">https://creativecommons.org/licenses/by/3.0/</a></p>

<p><strong>8. Can the published data be used for commercial purposes (such as for the creation of paid services)?</strong></p>

<p>Reuse of data for commercial purposes is permitted. We will be more than delighted if profitable services are created using our data.</p>

<p><strong>9. What format and encoding types are recommended for datasets?</strong></p>

<p>As a principle, it is better to publish the data in an inconvenient format than to leave it unpublished at first and wait for a planned improvement in its encoding in the future. A published dataset can always be republished in a new and better encoding. We recommend that you publish your open data <strong>at least in a 3-star format</strong>.</p>

<p>The system of the Five Stars of Openness was developed in the UK by Tim Berners-Lee and we follow exactly the same scoring and goals: more stars means better format/encoding for the user. For examples and further information: <a href="http://5stardata.info/en/" title="5-star Open Data">http://5stardata.info/en/</a></p>

<p><strong>10. How can people use opendata.riik.ee?</strong></p>

<p>TBA</p>

<p><strong>11. How can people submit applications created on the basis of open data?</strong></p>

<p>Go to the Apps page where you can find information on all applications which have so far been created on the basis of the open data. Once you have logged in to the portal, you can also submit your comments on the applications. Using a corresponding link on the Apps page, you can also submit your own application for publication on the portal. When approved by the administator, your application will be added to the portal.</p>

<p><strong>12. Is there a place where it is possible to discuss ideas, applications and using of the data?</strong></p>

<p>Yes, the portal\'s Forum serves that purpose. Furthermore, comments can be added to specific datasets and applications and we also have an open wishlist for new datasets.</p>

<p><strong>13. Where can I find further information on open data?</strong></p>

<ul>
<li><a href="/sites/default/files/manuals/avaliku-teabe-masinloetava-avalikustamise-roheline-raamat-20141125_0.odt">The Estonian Green Paper on the Publication of Machine Readable Public Data (in Estonian)</a>.</li>
<li><a href="https://riigikantselei.ee/sites/default/files/content-editors/TOF/TOF_uuringud/lingitud_eesti_lopparuanne_2.0.pdf">Study \'Linked Estonia\' (in Estonian)</a>.</li>
<li><a href="https://www.riigiteataja.ee/en/eli/518012016001/consolide">Public Information Act (English translation)</a>.</li>
</ul>

<p><strong>14. Will more public data become available in the future?</strong></p>

<p>Certainly! As the work on the project progresses, new open data will be added to the portal and the portal will also be linked to the open data portals of other countries.</p>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  /*
   * The "Help" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'help';
  $page->task = 'page';
  $page->admin_title = 'Help';
  $page->admin_description = 'Help page with interactive site tours. ';
  $page->path = 'help';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Help',
    'name' => 'management',
    'weight' => '1000',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_help_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'help';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'help-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol_stacked_50_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Help';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Follow the links on the right hand side to start a guided tutorial for our site.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['left'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'dgu_user-dgu_user_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['right'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['help'] = $page;

  /*
   * The "Guidelines" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'juhendid';
  $page->task = 'page';
  $page->admin_title = 'Juhendid';
  $page->admin_description = 'Juhendid';
  $page->path = 'juhendid';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'juhendid';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'juhendid',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => t('Guidelines'),
      'body' => t('<p>Here you can find guidelines pertaining to the use of the portal, publication of datasets and their use.</p>

<ul>
<li><a href="/sites/default/files/manuals/portaali-kasutusjuhend-teabevaldajatele-v06.odt" rel="nofollow">Portal guidelines for holders of information (in Estonian)</a></li>
<li><a href="/sites/default/files/manuals/juhised-andmete-avalikustamiseks.odt" rel="nofollow">Open data guidelines for holders of information (in Estonian) </a> </li>
<li><a href="/sites/default/files/manuals/data-exchange-with-Estonian-open-data-portal.odt" rel="nofollow">Data exchange with Estonian open data portal</a></li>
</ul>

<p>The following guidelines provide instruction on which data should be published as open data and which principles should be observed when publishing open data.</p>

<ul>
<li><a href="https://www.ria.ee/public/Arhitektuur/Avaandmete_loomise_juhend.pdf" rel="nofollow">Guidelines for creating and publishing open data (in Estonian)</a></li>
</ul>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['middle'][0] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['juhendid'] = $page;

  /*
   * The "Login" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'login';
  $page->task = 'page';
  $page->admin_title = 'Login';
  $page->admin_description = 'The default login page that the users of this site should be directed to. The Drupal\'s default "/user" should not be advertised. It should be known to administrators only.';
  $page->path = 'login';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_login_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'login-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Log in';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Login',
      'title' => t('Log in'),
      'body' => t('<p>The entire content of the portal and all datasets are available for download by all users, including anonymous ones.</p>

<p>In order to use forums and provide feedback, you must be logged in to the portal. In order to be able to publish and administer datasets, a logged in user must be linked to a particular holder of information and have the requisite rights. For a detailed description of this process, see the relevant chapter in the guidelines for information holders which can be found under <a href="/en/juhendid">More info-&gt;Guidelines</a></p>

<p style="padding-bottom:10px">To log in, use any of the following options:</p>

<p>&nbsp;</p><ul style="list-style:none;padding-left:0px;"><li id="id-card-login-link"><a href="/id_card_login">Log in with ID-card</a></li></ul>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['middle'][0] = 'new-10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['login'] = $page;


  /*
   * The "Green paper" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'roheline-raamat';
  $page->task = 'page';
  $page->admin_title = 'Roheline raamat';
  $page->admin_description = 'Roheline raamat';
  $page->path = 'roheline-raamat';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'roheline-raamat';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'roheline-raamat',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => t('Green Paper on Open Data'),
      'body' => t('<p>The Green Paper on Open Data is the first systematic government report on the open data policy in Estonia, setting out its guiding principles, interoperability architecture, central policy choices and an activity plan. It is a must read for anyone who plans to explore the concept of open data and related terminology. The holders of information can find here answers to many questions they encounter in relation to opening up data.</p>

<p>The Green Paper was prepared by the Department of State Information Systems of the Estonian Ministry of Economic Affairs and Communications in cooperation with the Estonian Data Protection Inspectorate and the Strategy Unit of the Government Office. The preliminary version of the Green Paper was made available for consultations in November 2013 on the portal osale.ee. Four rounds of discussions were held, recommendations for amendments were asked from all ministries, constitutional institutions, Estonian Association of Information Technology, Association of Estonian Cities and the Association of Estonian Municipalities, and more than 50 experts were consulted with via e-mail.</p>

<p>The Green Paper on Open Data (in Estonian) can be downloaded from the following link:</p>

<p><a href="/sites/default/files/manuals/avaliku-teabe-masinloetava-avalikustamise-roheline-raamat-20141125_0.odt" rel="nofollow">avaliku-teabe-masinloetava-avalikustamise-roheline-raamat-20141125_0.odt</a></p>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['middle'][0] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['roheline-raamat'] = $page;

  return $pages;

}
